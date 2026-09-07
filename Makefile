# --- MAKEFILE AMB RUTES AMB ESPAIS (PROTEGIT) ---

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
MATH = -lm

# Definició de rutes (sense cometes aquí)
SEQ = seqüencials i alternatives
ENUM = enums
ITER = iteratives

#test_ex22 no estan porque no tienen funcion para testear, toda la logica en el main()
ALL_TESTS = test_ex01 test_ex02 test_ex03 test_ex04 test_ex05 test_ex06 test_ex07 test_ex08 test_ex09 test_ex10 test_ex11 test_ex12 test_ex13 test_ex14 test_ex15 test_ex16 test_ex17 test_ex18 test_ex19 test_ex20 test_ex21 test_ex23 test_ex24 test_ex25 test_ex26 test_ex27 test_ex28 test_ex29 test_ex30 test_ex31 test_ex32 test_ex33

test_all: $(ALL_TESTS)
	@if ! grep -R -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/seqüencials i alternatives" "src/enums" "src/iteratives"; then \
		echo "-------------------------------------------------"; \
		echo "   FELICITATS! TOTS ELS TESTS HAN PASSAT (OK)    "; \
		echo "-------------------------------------------------"; \
	fi

# --- BLOC 1: SEQUENCIALS I ALTERNATIVES (1-13) ---

test_ex01:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex1/ultim_digit.c"; then \
		echo "[SKIP] ex01 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex1/ultim_digit.c" "test/$(SEQ)/ex1/ultim_digit_test.c" -o test_ex01 $(MATH) && \
		./test_ex01; \
	fi

test_ex02:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex2/digit.c"; then \
                echo "[SKIP] ex02 - todavía no implementado"; \
        else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex2/digit.c" "test/$(SEQ)/ex2/digit_test.c" -o test_ex02 $(MATH) && \
		./test_ex02; \
	fi
test_ex03:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex3/edat.c"; then \
		echo "[SKIP] ex03 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex3/edat.c" "test/$(SEQ)/ex3/edat_test.c" -o test_ex03 $(MATH) && \
		./test_ex03; \
	fi

test_ex04:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex4/maxof3.c"; then \
		echo "[SKIP] ex04 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex4/maxof3.c" "test/$(SEQ)/ex4/maxof3_test.c" -o test_ex04 $(MATH) && \
		./test_ex04; \
	fi

test_ex05:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex5/maxof3_amb2if.c"; then \
		echo "[SKIP] ex05 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex5/maxof3_amb2if.c" "test/$(SEQ)/ex5/maxof3_amb2if_test.c" -o test_ex05 $(MATH) && \
		./test_ex05; \
	fi

test_ex06:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex6/en_circumferencia.c"; then \
		echo "[SKIP] ex06 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex6/en_circumferencia.c" "test/$(SEQ)/ex6/en_circumferencia_test.c" -o test_ex06 $(MATH) && \
		./test_ex06; \
	fi

test_ex07:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex7/en_rectangle.c"; then \
		echo "[SKIP] ex07 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex7/en_rectangle.c" "test/$(SEQ)/ex7/en_rectangle_test.c" -o test_ex07 $(MATH) && \
		./test_ex07; \
	fi

test_ex08:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex8/min_rectangle.c"; then \
		echo "[SKIP] ex08 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex8/min_rectangle.c" "test/$(SEQ)/ex8/min_rectangle_test.c" -o test_ex08 $(MATH) && \
		./test_ex08; \
	fi

test_ex09:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex9/intervals.c"; then \
		echo "[SKIP] ex09 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex9/intervals.c" "test/$(SEQ)/ex9/intervals_test.c" -o test_ex09 $(MATH) && \
		./test_ex09; \
	fi

test_ex10:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex10/multiplica_nombres_aleatoris.c"; then \
		echo "[SKIP] ex10 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex10/multiplica_nombres_aleatoris.c" "test/$(SEQ)/ex10/multiplica_nombres_aleatoris_test.c" -o test_ex10 $(MATH) && \
		./test_ex10; \
	fi

test_ex11:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex11/equacio_segon_grau.c"; then \
		echo "[SKIP] ex11 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex11/equacio_segon_grau.c" "test/$(SEQ)/ex11/equacio_segon_grau_test.c" -o test_ex11 $(MATH) && \
		./test_ex11; \
	fi

test_ex12:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex12/menu_migdia.c"; then \
		echo "[SKIP] ex12 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex12/menu_migdia.c" "test/$(SEQ)/ex12/menu_migdia_test.c" -o test_ex12 $(MATH) && \
		./test_ex12; \
	fi

test_ex13:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(SEQ)/ex13/menu_migdia.c"; then \
		echo "[SKIP] ex13 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(SEQ)/ex13/menu_migdia.c" "test/$(SEQ)/ex13/menu_migdia_test.c" -o test_ex13 $(MATH) && \
		./test_ex13; \
	fi

test_ex14:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ENUM)/ex14/pedra_paper_tisores.c"; then \
		echo "[SKIP] ex14 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ENUM)/ex14/pedra_paper_tisores.c" "test/$(ENUM)/ex14/pedra_paper_tisores_test.c" -o test_ex14 $(MATH) && \
		./test_ex14; \
	fi

test_ex15:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ENUM)/ex15/semafor.c"; then \
		echo "[SKIP] ex15 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ENUM)/ex15/semafor.c" "test/$(ENUM)/ex15/semafor_test.c" -o test_ex15 $(MATH) && \
		./test_ex15; \
	fi

test_ex16:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex16/suma_interval.c"; then \
		echo "[SKIP] ex16 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex16/suma_interval.c" "test/$(ITER)/ex16/suma_interval_test.c" -o test_ex16 $(MATH) && \
		./test_ex16; \
	fi

test_ex17:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex17/descens_ascens.c"; then \
		echo "[SKIP] ex17 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex17/descens_ascens.c" "test/$(ITER)/ex17/descens_ascens_test.c" -o test_ex17 $(MATH) && \
		./test_ex17; \
	fi

test_ex18:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex18/max.c"; then \
		echo "[SKIP] ex18 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex18/max.c" "test/$(ITER)/ex18/max_test.c" -o test_ex18 $(MATH) && \
		./test_ex18; \
	fi

test_ex19:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex19/triangle_asteriscs.c"; then \
		echo "[SKIP] ex19 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex19/triangle_asteriscs.c" "test/$(ITER)/ex19/triangle_asteriscs_test.c" -o test_ex19 $(MATH) && \
		./test_ex19; \
	fi

test_ex20:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex20/polinomi.c"; then \
		echo "[SKIP] ex20 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex20/polinomi.c" "test/$(ITER)/ex20/polinomi_test.c" -o test_ex20 $(MATH) && \
		./test_ex20; \
	fi

test_ex21:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex21/escacs.c"; then \
		echo "[SKIP] ex21 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex21/escacs.c" "test/$(ITER)/ex21/escacs_test.c" -o test_ex21 $(MATH) && \
		./test_ex21; \
	fi

test_ex23:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex23/xifres.c"; then \
		echo "[SKIP] ex23 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex23/xifres.c" "test/$(ITER)/ex23/suma_xifres_test.c" -o test_ex23 $(MATH) && \
		./test_ex23; \
	fi

test_ex24:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex24/mcd.c"; then \
		echo "[SKIP] ex24 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex24/mcd.c" "test/$(ITER)/ex24/mcd_test.c" -o test_ex24 $(MATH) && \
		./test_ex24; \
	fi

test_ex25:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex25/invertir.c"; then \
		echo "[SKIP] ex25 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex25/invertir.c" "test/$(ITER)/ex25/invertir_parelles_test.c" -o test_ex25 $(MATH) && \
		./test_ex25; \
	fi

test_ex26:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex26/intensitat.c"; then \
		echo "[SKIP] ex26 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex26/intensitat.c" "test/$(ITER)/ex26/calcular_intensitat_test.c" -o test_ex26 $(MATH) && \
		./test_ex26; \
	fi

test_ex27:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex27/excursionista.c"; then \
		echo "[SKIP] ex27 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex27/excursionista.c" "test/$(ITER)/ex27/distancia_tot_entreno_test.c" -o test_ex27 $(MATH) && \
		./test_ex27; \
	fi

test_ex28:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex28/acompanyats.c"; then \
		echo "[SKIP] ex28 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex28/acompanyats.c" "test/$(ITER)/ex28/digits_acompanyats_test.c" -o test_ex28 $(MATH) && \
		./test_ex28; \
	fi

test_ex29:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex29/nim.c"; then \
		echo "[SKIP] ex29 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex29/nim.c" "test/$(ITER)/ex29/nim_test.c" -o test_ex29 $(MATH) && \
		./test_ex29; \
	fi

test_ex30:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex30/tira_daus.c"; then \
		echo "[SKIP] ex30 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex30/tira_daus.c" "test/$(ITER)/ex30/tira_daus_test.c" -o test_ex30 $(MATH) && \
		./test_ex30; \
	fi

test_ex31:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex31/cangurs.c"; then \
		echo "[SKIP] ex31 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex31/cangurs.c" "test/$(ITER)/ex31/es_troben_test.c" -o test_ex31 $(MATH) && \
		./test_ex31; \
	fi

test_ex32:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex32/mitjana_senars.c"; then \
		echo "[SKIP] ex32 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex32/mitjana_senars.c" "test/$(ITER)/ex32/mitjana_senars_test.c" -o test_ex32 $(MATH) && \
		./test_ex32; \
	fi

test_ex33:
	@echo ""
	@if grep -q "TODO Esborrar aquesta línia quan comencis a implementar" "src/$(ITER)/ex33/endevinar_nombre.c"; then \
		echo "[SKIP] ex33 - todavía no implementado"; \
	else \
		$(CC) $(CFLAGS) "src/$(ITER)/ex33/endevinar_nombre.c" "test/$(ITER)/ex33/endevinar_nombre_test.c" -o test_ex33 $(MATH) && \
		./test_ex33; \
	fi

clean:
	rm -f test_ex* app_ex* *.exe
