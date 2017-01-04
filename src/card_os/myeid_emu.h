/*
    myeid_emu.h

    This is part of MyECC (My Elliptic Curve Cryptography)

    Copyright (C) 2015 Peter Popovec, popovec.peter@gmail.com

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
#ifndef CS_MYEID_H
#define CS_MYEID_H
/* myeid_emu.c */
uint16_t security_env_set_reset(uint8_t *message, uint8_t len,struct iso7816_response *r);
uint16_t security_operation(uint8_t *message, uint8_t len,struct iso7816_response *r);
uint16_t myeid_generate_key(uint8_t *message, uint8_t len);
uint16_t myeid_get_data(uint8_t *message, uint8_t len,struct iso7816_response *r);
uint16_t myeid_put_data(uint8_t *message, uint8_t len,struct iso7816_response * r);
uint16_t myeid_activate_applet (uint8_t * message, uint8_t len);
#endif
