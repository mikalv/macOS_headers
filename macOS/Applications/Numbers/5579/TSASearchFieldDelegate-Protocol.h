//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSTextFieldDelegate-Protocol.h"

@class NSSearchField;

@protocol TSASearchFieldDelegate <NSTextFieldDelegate>
- (void)searchFieldTextDidChange:(NSSearchField *)arg1;

@optional
- (void)searchFieldDidBecomeFirstResponder:(NSSearchField *)arg1;
- (void)searchFieldTextDidEndEditing:(NSSearchField *)arg1;
- (void)searchFieldTextDidBeginEditing:(NSSearchField *)arg1;
@end

