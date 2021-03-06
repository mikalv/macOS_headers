//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VoiceOverInfo : NSObject
{
    id _parentOverride;
    struct AccessibilityObject *_object;
}

+ (int)accessibilityActionForVoiceOverAction:(id)arg1;
+ (id)voiceOverNotificationForNotification:(int)arg1;
+ (id)voiceOverActionForAction:(int)arg1;
+ (id)voiceOverRoleDescriptionForAccessibilityObject:(struct AccessibilityObject *)arg1;
+ (id)voiceOverRoleForAccessibilityRole:(int)arg1;
- (void).cxx_destruct;
- (struct CGRect)accessibilityScreenRectForChild:(id)arg1;
- (struct CGRect)convertRectToScreenCoordinates:(struct CGRect)arg1;
- (struct CGRect)screenRect;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityFocusedUIElement;
- (void)setParentOverride:(id)arg1;
- (void)accessibilityPostNotification:(int)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityParent;
- (id)accessibilityAttributeNames;
- (void)dealloc;
- (id)initWithAccessibilityObject:(struct AccessibilityObject *)arg1;

@end

