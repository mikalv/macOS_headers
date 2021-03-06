//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSTStyleProviding-Protocol.h"

@class TSTCellStyle, TSTTableStyle, TSWPParagraphStyle, TSWPShapeStyle;

@interface TSTTableStyleNetwork : TSPObject <GSSPAutoEncodable, TSTStyleProviding>
{
    int _presetIndex;
    TSTTableStyle *_tableStyle;
    TSTCellStyle *_bodyCellStyle;
    TSTCellStyle *_headerRowCellStyle;
    TSTCellStyle *_headerColumnCellStyle;
    TSTCellStyle *_footerRowCellStyle;
    TSTCellStyle *_categoryLevel1CellStyle;
    TSTCellStyle *_categoryLevel2CellStyle;
    TSTCellStyle *_categoryLevel3CellStyle;
    TSTCellStyle *_categoryLevel4CellStyle;
    TSTCellStyle *_categoryLevel5CellStyle;
    TSTCellStyle *_labelLevel1CellStyle;
    TSTCellStyle *_labelLevel2CellStyle;
    TSTCellStyle *_labelLevel3CellStyle;
    TSTCellStyle *_labelLevel4CellStyle;
    TSTCellStyle *_labelLevel5CellStyle;
    TSWPParagraphStyle *_bodyTextStyle;
    TSWPParagraphStyle *_headerRowTextStyle;
    TSWPParagraphStyle *_headerColumnTextStyle;
    TSWPParagraphStyle *_footerRowTextStyle;
    TSWPParagraphStyle *_categoryLevel1TextStyle;
    TSWPParagraphStyle *_categoryLevel2TextStyle;
    TSWPParagraphStyle *_categoryLevel3TextStyle;
    TSWPParagraphStyle *_categoryLevel4TextStyle;
    TSWPParagraphStyle *_categoryLevel5TextStyle;
    TSWPParagraphStyle *_labelLevel1TextStyle;
    TSWPParagraphStyle *_labelLevel2TextStyle;
    TSWPParagraphStyle *_labelLevel3TextStyle;
    TSWPParagraphStyle *_labelLevel4TextStyle;
    TSWPParagraphStyle *_labelLevel5TextStyle;
    TSWPParagraphStyle *_tableNameStyle;
    TSWPShapeStyle *_tableNameShapeStyle;
}

+ (id)deriveCategoryInteriorStrokeFromFooterRowVerticalStroke:(id)arg1;
+ (id)deriveCategoryBottomStrokeFromFooterRowSeparatorStroke:(id)arg1;
+ (id)deriveCategoryTopStrokeFromFooterRowSeparatorStroke:(id)arg1;
+ (id)identifiersForPresetID:(unsigned long long)arg1;
+ (id)curatedTableStylePropertySetForCrossDocumentPasteMasterComparison;
+ (id)defaultTableNameShapeStyleWithContext:(id)arg1;
+ (id)tableNameShapeStyleIDForPreset:(unsigned long long)arg1;
+ (id)tableNameStyleIDForPreset:(unsigned long long)arg1;
+ (id)networkWithContext:(id)arg1 presetID:(unsigned long long)arg2 styleProvider:(id)arg3 styleMorphingBlock:(CDUnknownBlockType)arg4;
+ (id)networkFromTheme:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)networkFromTheme:(id)arg1 presetID:(unsigned long long)arg2;
+ (id)networkFromStylesheet:(id)arg1 presetID:(unsigned long long)arg2;
+ (id)createStylesInStylesheet:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)networkWithContext:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)networkCapturedFromMasterLayout:(id)arg1 imageAnalyzer:(id)arg2;
+ (id)networkCapturedFromMasterLayout:(id)arg1;
+ (id)defaultNetworkFromTheme:(id)arg1 withMapper:(id)arg2;
+ (id)networkFromStyleProvider:(id)arg1;
- (void).cxx_destruct;
- (id)p_deriveCategoryTextStyleForTableStyleArea:(unsigned long long)arg1 fromTextStyle:(id)arg2 connectedToStylesheet:(BOOL)arg3;
- (id)deriveCategoryTextStyleForTableStyleArea:(unsigned long long)arg1 connectedToStylesheet:(BOOL)arg2;
- (id)p_deriveCategoryCellStyleForTableStyleArea:(unsigned long long)arg1 fromCellStyle:(id)arg2 connectedToStylesheet:(BOOL)arg3;
- (id)deriveCategoryCellStyleForTableStyleArea:(unsigned long long)arg1 connectedToStylesheet:(BOOL)arg2;
- (void)p_flattenStrokesIntoPropertyMap:(id)arg1 masterLayout:(id)arg2;
- (void)p_updateAccumulationDict:(id)arg1 cellID:(struct TSUCellCoord)arg2 key:(id)arg3 currentMax:(unsigned long long *)arg4 cellIDWithCurrentMax:(struct TSUCellCoord *)arg5;
- (id)p_getCleanTextStyleAtCellID:(struct TSUCellCoord)arg1 tableInfo:(id)arg2 imageAnalyzer:(id)arg3 tableStyleArea:(unsigned long long)arg4;
- (id)p_getCleanCellStyleForCellID:(struct TSUCellCoord)arg1 tableInfo:(id)arg2 imageAnalyzer:(id)arg3 tableStyleArea:(unsigned long long)arg4;
- (struct TSUCellCoord)p_representativeStyleCellInRegion:(id)arg1 tableInfo:(id)arg2;
- (void)p_captureAndFlattenStyles:(id)arg1 imageAnalyzer:(id)arg2;
- (void)generateCategoryStylesConnectedToStylesheet:(BOOL)arg1;
- (void)clearAndGenerateCategoryStylesConnectedToStylesheet:(BOOL)arg1;
- (void)p_clearCategoryStyles;
- (void)upgradeIfNecessary;
- (void)saveToArchive:(struct TableStyleNetworkArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct TableStyleNetworkArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 fromDictionary:(id)arg2 withPreset:(unsigned long long)arg3;
- (BOOL)valid;
- (id)dictionaryWithPreset:(unsigned long long)arg1;
- (void)enumerateAllStylesWithBlock:(CDUnknownBlockType)arg1;
- (id)styleForStyleNetworkIndex:(unsigned long long)arg1;
- (void)setTextStyle:(id)arg1 forTableStyleArea:(unsigned long long)arg2;
- (void)setCellStyle:(id)arg1 forTableStyleArea:(unsigned long long)arg2;
- (id)textStyleForTableStyleArea:(unsigned long long)arg1;
- (id)cellStyleForTableStyleArea:(unsigned long long)arg1;
- (BOOL)stylesInStylesheet:(id)arg1;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 styleComparisonBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copy;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (id)initWithContext:(id)arg1 styleProvider:(id)arg2 presetID:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 styleProvider:(id)arg2;
- (id)initWithContext:(id)arg1;
@property(nonatomic) unsigned long long presetID;
@property(retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property(retain, nonatomic) TSWPParagraphStyle *tableNameStyle;
@property(retain, nonatomic) TSWPParagraphStyle *labelLevel5TextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *labelLevel4TextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *labelLevel3TextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *labelLevel2TextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *labelLevel1TextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *categoryLevel5TextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *categoryLevel4TextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *categoryLevel3TextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *categoryLevel2TextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *categoryLevel1TextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *bodyTextStyle;
@property(retain, nonatomic) TSTCellStyle *labelLevel5CellStyle;
@property(retain, nonatomic) TSTCellStyle *labelLevel4CellStyle;
@property(retain, nonatomic) TSTCellStyle *labelLevel3CellStyle;
@property(retain, nonatomic) TSTCellStyle *labelLevel2CellStyle;
@property(retain, nonatomic) TSTCellStyle *labelLevel1CellStyle;
@property(retain, nonatomic) TSTCellStyle *categoryLevel5CellStyle;
@property(retain, nonatomic) TSTCellStyle *categoryLevel4CellStyle;
@property(retain, nonatomic) TSTCellStyle *categoryLevel3CellStyle;
@property(retain, nonatomic) TSTCellStyle *categoryLevel2CellStyle;
@property(retain, nonatomic) TSTCellStyle *categoryLevel1CellStyle;
@property(retain, nonatomic) TSTCellStyle *headerRowCellStyle;
@property(retain, nonatomic) TSTCellStyle *footerRowCellStyle;
@property(retain, nonatomic) TSTCellStyle *headerColumnCellStyle;
@property(retain, nonatomic) TSTCellStyle *bodyCellStyle;
@property(retain, nonatomic) TSTTableStyle *tableStyle;
- (void)populateGSSPTableStyleNetwork:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

