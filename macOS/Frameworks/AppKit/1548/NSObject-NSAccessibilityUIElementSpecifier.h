//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (NSAccessibilityUIElementSpecifier)
- (BOOL)accessibilityShouldUseUniqueId;
- (id)_accessibilityUIElementSpecifier;
- (id)_accessibilityUIElementSpecifierRegisterIfNeeded:(BOOL)arg1;
- (id)_accessibilityUIElementSpecifierForChild:(id)arg1 registerIfNeeded:(BOOL)arg2;
- (BOOL)_accessibilityIsTableViewDescendant;
- (long long)_accessibilitySpecifierComponentForChildUIElement:(id)arg1 registerIfNeeded:(BOOL)arg2;
- (id)_accessibilityChildUIElementForSpecifierComponent:(long long)arg1;
@end

