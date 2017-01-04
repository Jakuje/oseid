/*
    mem_device.h

    This is part of OsEID (Open source Electronic ID)

    Copyright (C) 2015,2016 Peter Popovec, popovec.peter@gmail.com

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    

*/

// on error 1 is returned, 0 = no error
uint8_t device_read_block (void *buffer, uint16_t offset, uint8_t size);
uint8_t device_write_block (void *buffer, uint16_t offset, uint8_t size);
uint8_t sec_device_read_block(void *buffer, uint8_t offset, uint8_t size);
uint8_t sec_device_write_block(void *buffer, uint8_t offset, uint8_t size);

// fill block at offset _offset_ with value 0xff of maximal length _size_
// return number of filled bytes (-1 on error)
int16_t device_write_ff (uint16_t offset, uint16_t size);
