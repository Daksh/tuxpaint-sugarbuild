# Copyright (C) 2010, Aleksey Lim
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import gobject

from _gui import *
from _gui import HomogeneTable as _HomogeneTable


class Tag(gobject.GObject):

    def __init__(self, value):
        gobject.GObject.__init__(self)
        self.value = value


class HomogeneTable(_HomogeneTable):

    def do_new_cell(self):
        raise Exception('Override gui.HomogeneTable.do_new_cell.')

    def do_fill_cell(self, cell, index):
        raise Exception('Override gui.HomogeneTable.do_fill_cell.')

    def do_highlight_cell(self, cell, selected):
        pass


gobject.type_register(HomogeneTable)
