#ifndef STATISTICS_PROC_H
#define STATISTICS_PROC_H

#include "headers-system.h"
#include "process.h"
#include "network.h"

extern uint8_t id_buff_circ;

// encontra o processo ao qual o fluxo de dados pertence
// e adiciona/incrementa estatisticas de pacotes por segundo
// e total de bytes
bool add_statistics_in_processes(process_t *processes,
                                 const size_t tot_proc,
                                 struct packet *pkt);

#endif //STATISTICS_PROC_H
