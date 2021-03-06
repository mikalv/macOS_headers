//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray, NSResponder, NSString, NSWindow;

@protocol CalculatorView <NSObject>
- (void)setInitialValue:(NSString *)arg1;
- (void)setPrecision:(unsigned long long)arg1;
- (BOOL)supportsDisplayModeChanges;
- (void)rpnExchange;
- (void)rpnDrop;
- (void)rpnRollDown;
- (void)rpnRollUp;
- (NSMutableArray *)rpnStack;
- (BOOL)rpnViewIsWide;
- (void)setRPNMode:(BOOL)arg1;
- (BOOL)supportsRPN;
- (BOOL)supportsSpeech;
- (BOOL)supportsConversions;
- (NSString *)nameForPrintMenu:(id)arg1;
- (NSString *)nameForSaveMenu:(id)arg1;
- (NSArray *)viewNames:(id)arg1;
- (BOOL)canShowTape:(id)arg1;
- (BOOL)shouldShowDisplay:(id)arg1;
- (void)setupResponderStatus:(NSResponder *)arg1;
- (void)addView:(NSString *)arg1 toWindow:(NSWindow *)arg2 atPoint:(struct CGPoint)arg3;
- (void)removeAllViewsFromWindow:(NSWindow *)arg1;
- (struct CGSize)maximumSize:(NSString *)arg1;
- (struct CGSize)minimumSize:(NSString *)arg1;
- (struct CGSize)normalSize:(NSString *)arg1;
- (void)setPaperTape:(id)arg1;
- (void)setLCDDisplay:(id)arg1;
- (void)setSpeechController:(id)arg1;
- (void)setCalcController:(id)arg1;
- (BOOL)readyForConversion;

@optional
- (void)setMemoryIndicatorOn:(BOOL)arg1;
- (void)setOperandIndicatorState:(NSString *)arg1;
- (void)handleStringFromCalcEngine:(NSString *)arg1;
- (void)handleConversion:(NSArray *)arg1;
@end

