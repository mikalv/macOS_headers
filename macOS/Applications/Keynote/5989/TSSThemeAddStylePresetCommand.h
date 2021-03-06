//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class NSString, TSSStyle, TSSTheme;
@protocol TSSPreset;

@interface TSSThemeAddStylePresetCommand : TSKCommand
{
    TSSTheme *mTheme;
    TSSStyle<TSSPreset> *mPreset;
    NSString *mPresetKind;
    NSString *mIdentifier;
    BOOL mAddPresetToStylesheet;
}

- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_removePreset;
- (void)p_addPreset;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (id)actionString;
- (id)initWithTheme:(id)arg1 preset:(id)arg2 presetKind:(id)arg3 identifier:(id)arg4;

@end

