//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RepairBaseView.h"

@class KBButton, NSLocalTextField;

@interface BaseRepairSuccessView : RepairBaseView
{
    NSLocalTextField *_localstring1;
    NSLocalTextField *_localstring2;
    NSLocalTextField *_localstring3;
    KBButton *_btnShare;
}

- (void)onShareBtn:(id)arg1;
- (void)themeWillDidChange;
- (void)initBackView;
- (void)initPageView;
- (void)initViewText;
- (void)onBtnBack:(id)arg1;
- (void)drawRect:(struct _NSRect)arg1;

@end

