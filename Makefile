.PHONY: clean All

All:
	@echo "----------Building project:[ functionPractice - Debug ]----------"
	@cd "functions17\functionPractice" && "$(MAKE)" -f  "functionPractice.mk"
clean:
	@echo "----------Cleaning project:[ functionPractice - Debug ]----------"
	@cd "functions17\functionPractice" && "$(MAKE)" -f  "functionPractice.mk" clean
