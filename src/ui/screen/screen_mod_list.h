/*
 * This file is part of the Colobot: Gold Edition source code
 * Copyright (C) 2001-2020, Daniel Roux, EPSITEC SA & TerranovaTeam
 * http://epsitec.ch; http://colobot.info; http://github.com/colobot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://gnu.org/licenses
 */

#pragma once

#include "app/modman.h"

#include "ui/maindialog.h"

#include "ui/screen/screen.h"

#include <map>

namespace Ui
{

/**
 * \class CScreenModList
 * \brief This class is the front-end for the \ref CModManager.
 */
class CScreenModList : public CScreen
{
public:
    CScreenModList(CMainDialog* dialog, CModManager* modManager);

    void CreateInterface() override;
    bool EventProcess(const Event &event) override;

protected:
    void FindMods();
    void ApplyChanges();
    void CloseWindow();

    void UpdateAll();
    void UpdateModList();
    void UpdateModDetails();
    void UpdateModSummary();
    void UpdateEnableDisableButton();
    void UpdateApplyButton();
    void UpdateUpDownButtons();

protected:
    Ui::CMainDialog* m_dialog;

    CModManager* m_modManager;

    size_t m_modSelectedIndex = 0;
};

} // namespace Ui
