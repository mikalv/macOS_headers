//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/NSCoding-Protocol.h>
#import <AddressBook/NSSecureCoding-Protocol.h>

@class NSArray, NSColor, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ABCardViewStyle : NSObject <NSCoding, NSSecureCoding>
{
    NSString *_nameViewHeadlineFontName;
    double _nameViewHeadlineFontSize;
    NSColor *_nameViewHeadlineTextColor;
    NSDictionary *_nameViewHeadlinePlaceholderAttributes;
    NSString *_nameViewTaglineFontName;
    double _nameViewTaglineFontSize;
    NSColor *_nameViewTaglineTextColor;
    NSDictionary *_nameViewTaglinePlaceholderAttributes;
    double _nameViewFirstRowVerticalOffset;
    double _nameViewInterrowPadding;
    double _nameViewPhotoInsetLeading;
    BOOL _alignsNameViewTextWithImageMidpoint;
    NSString *_datumLabelFontName;
    double _datumLabelFontSize;
    NSColor *_datumLabelTextColor;
    NSColor *_datumLabelSuggestionTextColor;
    NSColor *_datumLabelMouseOverTextColor;
    NSColor *_datumLabelMouseOverHighlightColor;
    NSColor *_datumLabelPopupTextColor;
    BOOL _shouldAlignLabelWithTopOfValue;
    NSString *_datumValueFontName;
    double _datumValueFontSize;
    NSColor *_datumValueTextColor;
    NSColor *_datumValueSuggestionTextColor;
    NSColor *_datumValueMouseOverTextColor;
    NSColor *_datumValueMouseOverHighlightColor;
    NSDictionary *_datumValuePlaceholderAttributes;
    double _interPropertyPadding;
    double _intraDatumPadding;
    double _interColumnHorizontalPadding;
    double _cardViewTopMargin;
    double _cardViewBottomMargin;
    double _cardViewLeftMargin;
    double _cardViewRightMargin;
    double _cardViewMinimumHeight;
    double _cardTemplateViewTopMargin;
    double _collectionSeparatorInsetLeading;
    double _collectionSeparatorInsetTrailing;
    double _collectionViewLeftMargin;
    double _collectionTemplateViewLeftMargin;
    NSArray *_displayedCollectionViewProperties;
    BOOL _allowsLabelRolloverActions;
    BOOL _allowsNoteEditing;
    BOOL _allowsPhotoEditing;
    BOOL _allowsImmediateEditing;
    BOOL _isContentSizeObservable;
}

+ (BOOL)supportsSecureCoding;
@property BOOL isContentSizeObservable; // @synthesize isContentSizeObservable=_isContentSizeObservable;
@property BOOL allowsImmediateEditing; // @synthesize allowsImmediateEditing=_allowsImmediateEditing;
@property BOOL allowsPhotoEditing; // @synthesize allowsPhotoEditing=_allowsPhotoEditing;
@property BOOL allowsNoteEditing; // @synthesize allowsNoteEditing=_allowsNoteEditing;
@property BOOL allowsLabelRolloverActions; // @synthesize allowsLabelRolloverActions=_allowsLabelRolloverActions;
@property(retain) NSArray *displayedCollectionViewProperties; // @synthesize displayedCollectionViewProperties=_displayedCollectionViewProperties;
@property double collectionTemplateViewLeftMargin; // @synthesize collectionTemplateViewLeftMargin=_collectionTemplateViewLeftMargin;
@property double collectionViewLeftMargin; // @synthesize collectionViewLeftMargin=_collectionViewLeftMargin;
@property double collectionSeparatorInsetTrailing; // @synthesize collectionSeparatorInsetTrailing=_collectionSeparatorInsetTrailing;
@property double collectionSeparatorInsetLeading; // @synthesize collectionSeparatorInsetLeading=_collectionSeparatorInsetLeading;
@property double cardViewMinimumHeight; // @synthesize cardViewMinimumHeight=_cardViewMinimumHeight;
@property double cardTemplateViewTopMargin; // @synthesize cardTemplateViewTopMargin=_cardTemplateViewTopMargin;
@property double cardViewRightMargin; // @synthesize cardViewRightMargin=_cardViewRightMargin;
@property double cardViewLeftMargin; // @synthesize cardViewLeftMargin=_cardViewLeftMargin;
@property double cardViewBottomMargin; // @synthesize cardViewBottomMargin=_cardViewBottomMargin;
@property double cardViewTopMargin; // @synthesize cardViewTopMargin=_cardViewTopMargin;
@property double interColumnHorizontalPadding; // @synthesize interColumnHorizontalPadding=_interColumnHorizontalPadding;
@property double intraDatumPadding; // @synthesize intraDatumPadding=_intraDatumPadding;
@property double interPropertyPadding; // @synthesize interPropertyPadding=_interPropertyPadding;
@property(retain) NSDictionary *datumValuePlaceholderAttributes; // @synthesize datumValuePlaceholderAttributes=_datumValuePlaceholderAttributes;
@property(retain) NSColor *datumValueMouseOverHighlightColor; // @synthesize datumValueMouseOverHighlightColor=_datumValueMouseOverHighlightColor;
@property(retain) NSColor *datumValueMouseOverTextColor; // @synthesize datumValueMouseOverTextColor=_datumValueMouseOverTextColor;
@property(retain) NSColor *datumValueSuggestionTextColor; // @synthesize datumValueSuggestionTextColor=_datumValueSuggestionTextColor;
@property(retain) NSColor *datumValueTextColor; // @synthesize datumValueTextColor=_datumValueTextColor;
@property double datumValueFontSize; // @synthesize datumValueFontSize=_datumValueFontSize;
@property(retain) NSString *datumValueFontName; // @synthesize datumValueFontName=_datumValueFontName;
@property BOOL shouldAlignLabelWithTopOfValue; // @synthesize shouldAlignLabelWithTopOfValue=_shouldAlignLabelWithTopOfValue;
@property(retain) NSColor *datumLabelPopupTextColor; // @synthesize datumLabelPopupTextColor=_datumLabelPopupTextColor;
@property(retain) NSColor *datumLabelMouseOverHighlightColor; // @synthesize datumLabelMouseOverHighlightColor=_datumLabelMouseOverHighlightColor;
@property(retain) NSColor *datumLabelMouseOverTextColor; // @synthesize datumLabelMouseOverTextColor=_datumLabelMouseOverTextColor;
@property(retain) NSColor *datumLabelSuggestionTextColor; // @synthesize datumLabelSuggestionTextColor=_datumLabelSuggestionTextColor;
@property(retain) NSColor *datumLabelTextColor; // @synthesize datumLabelTextColor=_datumLabelTextColor;
@property double datumLabelFontSize; // @synthesize datumLabelFontSize=_datumLabelFontSize;
@property(retain) NSString *datumLabelFontName; // @synthesize datumLabelFontName=_datumLabelFontName;
@property BOOL alignsNameViewTextWithImageMidpoint; // @synthesize alignsNameViewTextWithImageMidpoint=_alignsNameViewTextWithImageMidpoint;
@property double nameViewPhotoInsetLeading; // @synthesize nameViewPhotoInsetLeading=_nameViewPhotoInsetLeading;
@property double nameViewInterrowPadding; // @synthesize nameViewInterrowPadding=_nameViewInterrowPadding;
@property double nameViewFirstRowVerticalOffset; // @synthesize nameViewFirstRowVerticalOffset=_nameViewFirstRowVerticalOffset;
@property(retain) NSDictionary *nameViewTaglinePlaceholderAttributes; // @synthesize nameViewTaglinePlaceholderAttributes=_nameViewTaglinePlaceholderAttributes;
@property(retain) NSColor *nameViewTaglineTextColor; // @synthesize nameViewTaglineTextColor=_nameViewTaglineTextColor;
@property double nameViewTaglineFontSize; // @synthesize nameViewTaglineFontSize=_nameViewTaglineFontSize;
@property(retain) NSString *nameViewTaglineFontName; // @synthesize nameViewTaglineFontName=_nameViewTaglineFontName;
@property(retain) NSDictionary *nameViewHeadlinePlaceholderAttributes; // @synthesize nameViewHeadlinePlaceholderAttributes=_nameViewHeadlinePlaceholderAttributes;
@property(retain) NSColor *nameViewHeadlineTextColor; // @synthesize nameViewHeadlineTextColor=_nameViewHeadlineTextColor;
@property double nameViewHeadlineFontSize; // @synthesize nameViewHeadlineFontSize=_nameViewHeadlineFontSize;
@property(retain) NSString *nameViewHeadlineFontName; // @synthesize nameViewHeadlineFontName=_nameViewHeadlineFontName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)styleProvider;
- (id)initWithStyleProvider:(id)arg1;

@end

