//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UILAPropertySource-Protocol.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UILAConfigurationHistory : NSObject <_UILAPropertySource, NSCopying>
{
    NSMutableSet *_newlyHiddenItems;
    NSMutableSet *_newlyUnhiddenItems;
    BOOL _layoutFillsCanvas;
    BOOL _layoutUsesCanvasMarginsWhenFilling;
    BOOL _hasEstablishedBaseValues;
    BOOL _inLayoutArrangementUpdateSection;
    long long _axis;
}

@property(nonatomic, getter=isInLayoutArrangementUpdateSection) BOOL inLayoutArrangementUpdateSection; // @synthesize inLayoutArrangementUpdateSection=_inLayoutArrangementUpdateSection;
@property(nonatomic) BOOL hasEstablishedBaseValues; // @synthesize hasEstablishedBaseValues=_hasEstablishedBaseValues;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems; // @synthesize _newlyUnhiddenItems;
@property(readonly, nonatomic) NSSet *_newlyHiddenItems; // @synthesize _newlyHiddenItems;
@property(nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; // @synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) BOOL layoutFillsCanvas; // @synthesize layoutFillsCanvas=_layoutFillsCanvas;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

