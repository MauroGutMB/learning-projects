typedef struct dlk dlk;
dlk* criar_dlk(int v);
dlk* inserir_no(dlk* l, int v);
void dlk_liberar(dlk* l);
void imprimir_dlk(dlk* l);
void imprimir_reverso_dlk(dlk* l);
dlk* dlk_remover(dlk* l, int v);
