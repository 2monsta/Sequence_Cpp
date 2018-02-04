.PHONY: clean All

All:
	@echo "----------Building project:[ ContainerClass - Debug ]----------"
	@cd "ContainerClass" && "$(MAKE)" -f  "ContainerClass.mk"
clean:
	@echo "----------Cleaning project:[ ContainerClass - Debug ]----------"
	@cd "ContainerClass" && "$(MAKE)" -f  "ContainerClass.mk" clean
