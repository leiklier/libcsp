/*
Cubesat Space Protocol - A small network-layer protocol designed for Cubesats
Copyright (C) 2012 GomSpace ApS (http://www.gomspace.com)
Copyright (C) 2012 AAUSAT3 Project (http://aausat3.space.aau.dk) 

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _CSP_IF_CAN_H_
#define _CSP_IF_CAN_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include <csp/csp.h>
#include <csp/csp_interface.h>

struct csp_can_driver {
	int (*setup)(csp_iface_t *ifc, uint32_t id, uint32_t mask);
	int (*send)(csp_iface_t *ifc, uint32_t id, uint8_t * data, uint8_t dlc);
};

csp_iface_t *csp_can_alloc(struct csp_can_driver *driver);

int csp_can_setup(csp_iface_t *ifc);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _CSP_IF_CAN_H_ */
