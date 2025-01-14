/*****************************************************************************
* Copyright 2015-2022 Alexander Barthel alex@littlenavmap.org
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/

#ifndef LNM_MESSAGESETTINGS_H
#define LNM_MESSAGESETTINGS_H

namespace messages {

/* Reset all "do not show this again" message box status values */
void resetAllMessages();

/* Reset all relevant "do not show this again" message box status values which are typically ignored by users */
void resetEssentialMessages();

}

#endif // MESSAGESETTINGS_H
