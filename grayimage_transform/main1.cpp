#include "ExcelFormat.h"
#include <iostream>
#include <stdlib.h>
using namespace ExcelFormat;
//save data into excel file at selected position
ExcelFormat::BasicExcel xls;
int main(){

// create sheet 1 and get the associated BasicExcelWorksheet pointer
    xls.New(1);
    BasicExcelWorksheet* sheet = xls.GetWorksheet(0);
    XLSFormatManager fmt_mgr(xls);


// 设置Excel表格中的字体

    ExcelFont font_bold;
    font_bold._weight = 700; // 700

    CellFormat fmt_bold(fmt_mgr);
    fmt_bold.set_font(font_bold);

    int col, row = 0;
//写入第一行，也就是表头
//    for(col=0; col<10; ++col) {
//        BasicExcelCell* cell = sheet->Cell(row, col);
//
//        cell->Set("TITLE");
//        cell->SetFormat(fmt_bold);
//    }

//写入下面的数据
    while(++row <= 4) {
        for(int col=0; col<10; ++col)
            sheet->Cell(row, col)->Set(111);
    }

    ++row;

    xls.SaveAs("filePath.xls");
}