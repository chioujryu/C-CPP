# 第一段學習

# calc:
# 	@g++ calc.cpp multi.cpp sub.cpp add.cpp -o calc
# 	@./calc

# ================================

# 分開來寫，更改內容的話，就會只編譯有改動的代碼，編譯速度比較快

# calc: multi.o add.o sub.o
# 	g++ multi.o add.o sub.o calc.cpp -o calc

# multi.o: multi.cpp
# 	g++ -c multi.cpp -o multi.o

# add.o: add.cpp
# 	g++ -c add.cpp -o add.o

# sub.o: sub.cpp
# 	g++ -c sub.cpp -o sub.o

# # 刪除文件，在git bash上輸入make clean
# clean:
# 	rm -rf *.o calc 

# =======================================


# OBJ = multi.o add.o sub.o calc.o
# TARGET = calc

# $(TARGET): $(OBJ)
# 	g++ $(OBJ) -o $(TARGET)

# calc.o: calc.cpp
# 	g++ -c calc.cpp -o calc.o

# multi.o: multi.cpp
# 	g++ -c multi.cpp -o multi.o

# add.o: add.cpp
# 	g++ -c add.cpp -o add.o

# sub.o: sub.cpp
# 	g++ -c sub.cpp -o sub.o

# # 刪除文件，在git bash上輸入make clean
# clean:
# 	rm -rf *.o calc


# ===============================


# OBJ = multi.o add.o sub.o calc.o
# TARGET = calc

# $(TARGET): $(OBJ)
# 	g++ $(OBJ) -o $(TARGET)

# calc.o: calc.cpp
# 	g++ -c $^ -o $@

# multi.o: multi.cpp
# 	g++ -c $^ -o $@

# add.o: add.cpp
# 	g++ -c $^ -o $@

# sub.o: sub.cpp
# 	g++ -c $^ -o $@

# # 刪除文件，在git bash上輸入make clean
# clean:
# 	rm -rf *.o $(TARGET)

# ======================================

# OBJ = multi.o add.o sub.o calc.o
# TARGET = calc

# $(TARGET): $(OBJ)
# 	$(CXX) $(OBJ) -o $(TARGET)

# calc.o: calc.cpp
# 	$(CXX) -c $^ -o $@

# multi.o: multi.cpp
# 	$(CXX) -c $^ -o $@

# add.o: add.cpp
# 	$(CXX) -c $^ -o $@

# sub.o: sub.cpp
# 	$(CXX) -c $^ -o $@

# # 刪除文件，在git bash上輸入make clean
# clean:
# 	$(RM) *.o $(TARGET)

# show:  #在git bash上輸入make show -s
# 	echo $(AS)
# 	echo $(CC)
# 	echo $(CPP)
# 	echo $(CXX)
# 	echo $(RM)

# =======================================

# Makefile中的偽目標
# 偽目標 .PHONY:clean
# 聲明目標為偽目標之後，makefile將不會判對目標是否存在或該目標是否需要更新


# .PHONY:clean show# 在git bash輸入touch show再輸入make show

# OBJ = multi.o add.o sub.o calc.o
# TARGET = calc

# $(TARGET): $(OBJ)
# 	$(CXX) $(OBJ) -o $(TARGET)

# calc.o: calc.cpp
# 	$(CXX) -c $^ -o $@

# multi.o: multi.cpp
# 	$(CXX) -c $^ -o $@

# add.o: add.cpp
# 	$(CXX) -c $^ -o $@

# sub.o: sub.cpp
# 	$(CXX) -c $^ -o $@

# # 刪除文件，在git bash上輸入make clean
# clean:
# 	$(RM) *.o $(TARGET)

# show:  #在git bash上輸入make show -s
# 	echo $(AS)
# 	echo $(CC)
# 	echo $(CPP)
# 	echo $(CXX)
# 	echo $(RM)


# ==================================

# Makefile中的匹配模式

.PHONY:clean show# 在git bash輸入touch show再輸入make show

OBJ = multi.o add.o sub.o calc.o
TARGET = calc

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) -c $^ -o $@

# 刪除文件，在git bash上輸入make clean
clean:
	$(RM) *.o $(TARGET)

show:  #在git bash上輸入make show -s
	echo $(AS)
	echo $(CC)
	echo $(CPP)
	echo $(CXX)
	echo $(RM)