//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSStoreMapNode.h>

#import <CoreData/NSCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding>
{
    id *_attributes;
    id _attributesAsEncoded;
}

+ (void)initialize;
- (id)valueForKey:(id)arg1;
- (const id *)attributeValues;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_doAttributeDecoding;
- (id)initWithCoder:(id)arg1;
- (id)initWithValues:(id *)arg1 objectID:(id)arg2;

@end

