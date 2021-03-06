//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;
@protocol TSWPEndNoteShimServiceProvider;

@interface TSWPEndNoteConnection : NSObject
{
    NSArray *_favoriteStyles;
    NSDictionary *_favoriteStylesIndicies;
    unsigned int _failedPluginLoadingAttempts;
    BOOL _checkedEndNoteAvailability;
    CDStruct_2c3aca9f _availability;
    NSString *_format;
    BOOL _formatHasBeenInitializedOrSet;
    id <TSWPEndNoteShimServiceProvider> _provider;
}

+ (void)applyEndNoteXml:(id)arg1 toCitationRecord:(id)arg2;
+ (id)currentPluginDownloadURL;
+ (id)sharedEndNoteConnection;
@property(retain) id <TSWPEndNoteShimServiceProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *format;
- (void)p_applicationDidActivateNotification:(id)arg1;
- (id)p_getProxyObject;
- (id)p_fixEndNoteAttributedString:(id)arg1;
- (BOOL)getBibliographyString:(out id *)arg1 andCitationStrings:(out id *)arg2 forCitationInfos:(in id)arg3 usingPosition:(unsigned int)arg4;
- (BOOL)getBibliographyString:(id *)arg1 andCitationStrings:(id *)arg2 forCitationRecords:(id)arg3 usingPosition:(unsigned int)arg4;
- (BOOL)getFormattedTextForCitation:(id)arg1 usingPosition:(unsigned int)arg2 outCitation:(id *)arg3 outBiblioEntry:(id *)arg4;
- (id)infosForAdjacentCitations:(id)arg1 isFootnote:(BOOL)arg2;
- (id)infoForCitation:(id)arg1 isFootnote:(BOOL)arg2;
- (id)infoForCitation:(id)arg1;
- (id)p_descriptionForCitation:(id)arg1 isAdjacent:(BOOL)arg2 isFootnote:(BOOL)arg3;
- (void)hasPopulatedLibraries:(CDUnknownBlockType)arg1;
- (id)defaultStyle;
- (id)p_favoriteStyles;
- (void)outputStylesWithCallback:(CDUnknownBlockType)arg1;
- (void)recordsForSearchString:(id)arg1 forContext:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (BOOL)launchEndNote:(BOOL)arg1;
- (BOOL)isEndNoteAvailableInContext:(id)arg1;
- (CDStruct_2c3aca9f)availability;
- (id)bibliographyFormatMenu;
- (void)p_setFavoriteStyles:(id)arg1;
- (id)availableFormats;
- (id)formatForTag:(long long)arg1;
- (long long)tagForFormat:(id)arg1;
- (void)dealloc;
- (id)init;

@end

