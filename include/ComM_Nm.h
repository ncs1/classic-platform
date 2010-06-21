/* -------------------------------- Arctic Core ------------------------------
 * Arctic Core - the open source AUTOSAR platform http://arccore.com
 *
 * Copyright (C) 2009  ArcCore AB <contact@arccore.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * -------------------------------- Arctic Core ------------------------------*/








#ifndef COMM_NM_H_
#define COMM_NM_H_

void ComM_Nm_NetworkStartIndication( NetworkHandleType Channel );
void ComM_Nm_NetworkMode( NetworkHandleType Channel );
void ComM_Nm_PrepareBusSleepMode( NetworkHandleType Channel );
void ComM_Nm_BusSleepMode( NetworkHandleType Channel );
void ComM_Nm_RestartIndication( NetworkHandleType Channel );

#endif /*COMM_NM_H_*/