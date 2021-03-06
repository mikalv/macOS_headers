//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AXRuntime/AXUIElement.h>

#import <AXRuntime/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface AXUIMockElement : AXUIElement <NSCopying>
{
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_writableAttributes;
    NSMutableDictionary *_performActionLog;
    BOOL _usesCarriageReturnAsLinesSeparator;
    CDUnknownBlockType _cacheUpdatedCallback;
}

+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (void)applyElementAttributeCacheScheme:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType cacheUpdatedCallback; // @synthesize cacheUpdatedCallback=_cacheUpdatedCallback;
@property(nonatomic) BOOL usesCarriageReturnAsLinesSeparator; // @synthesize usesCarriageReturnAsLinesSeparator=_usesCarriageReturnAsLinesSeparator;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (unsigned long long)_lineNumberForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForLineNumber:(unsigned long long)arg1;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(BOOL)arg3;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(long long)arg1 withNumber:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(long long)arg1 withString:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withBOOL:(BOOL)arg2;
- (void)updateCache:(long long)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (int)pid;
- (BOOL)isValidForApplication:(id)arg1;
- (BOOL)isValid;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2 fetchAttributes:(BOOL)arg3;
- (id)nextElementsWithCount:(unsigned long long)arg1;
- (id)previousElementsWithCount:(unsigned long long)arg1;
- (BOOL)performAXAction:(int)arg1 withValue:(id)arg2;
- (BOOL)performAXAction:(int)arg1;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2;
- (id)uiElementsWithAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void *)arg2;
- (void)fillStaticCache;
- (unsigned long long)arrayCountWithAXAttribute:(long long)arg1;
- (id)uiElementArrayForAXAttribute:(long long)arg1;
- (id)urlWithAXAttribute:(long long)arg1;
- (struct CGRect)rectWithAXAttribute:(long long)arg1;
- (struct CGPath *)pathWithAXAttribute:(long long)arg1;
- (struct _NSRange)rangeWithAXAttribute:(long long)arg1;
- (struct CGSize)sizeWithAXAttribute:(long long)arg1;
- (struct CGPoint)pointWithAXAttribute:(long long)arg1;
- (id)numberWithAXAttribute:(long long)arg1;
- (long long)longWithAXAttribute:(long long)arg1;
- (float)floatWithAXAttribute:(long long)arg1;
- (BOOL)boolWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1;
- (id)stringWithAXAttribute:(long long)arg1;
- (id)arrayWithAXAttribute:(long long)arg1;
- (void)setValue:(id)arg1 forAXParameterizedAttribute:(long long)arg2;
- (void)setValue:(id)arg1 forAXAttribute:(long long)arg2;
- (BOOL)canPerformAXAction:(int)arg1;
- (id)uiElementWithAXAttribute:(long long)arg1;
- (BOOL)canSetAXAttribute:(long long)arg1;
- (void)setWritable:(BOOL)arg1 forAXAttribute:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)disableCache;
- (void)enableCache:(BOOL)arg1;
- (id)_valueForAttribute:(long long)arg1;
- (id)description;
- (id)performBlockWhileLoggingPerformedActions:(CDUnknownBlockType)arg1;
- (id)endLoggingActions;
- (void)startLoggingActions;
- (id)visibleElements;
- (struct __AXUIElement *)axElement;
- (BOOL)isMockElement;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

