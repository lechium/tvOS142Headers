/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
@class NSIndexSet, NSArray;

@interface KGElementIdentifierSet : NSObject {

	Bitmap* _bitmap;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSIndexSet * indexSet; 
@property (nonatomic,copy,readonly) NSArray * indexArray; 
@property (nonatomic,readonly) unsigned long long firstElement; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copy;
-(id)init;
-(id)mutableCopy;
-(unsigned long long)count;
-(id)initWithIndexSet:(id)arg1 ;
-(NSIndexSet *)indexSet;
-(BOOL)containsIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)firstElement;
-(const Bitmap*)bitmap;
-(id)initWithBitmap:(const Bitmap*)arg1 ;
-(NSArray *)indexArray;
-(id)initWithElementIdentifier:(unsigned long long)arg1 ;
-(id)initWithIndexArray:(id)arg1 ;
-(Bitmap*)mutableBitmap;
-(unsigned long long)elementAtOffset:(unsigned long long)arg1 ;
-(unsigned long long)randomElement;
-(id)extractRangeByIndex:(NSRange)arg1 ;
-(id)identifierSetByAddingIdentifier:(unsigned long long)arg1 ;
-(id)identifierSetByRemovingIdentifier:(unsigned long long)arg1 ;
-(id)identifierSetByFormingUnion:(id)arg1 ;
-(id)identifierSetByIntersectingIdentifierSet:(id)arg1 ;
-(id)identifierSetBySubtractingIdentifierSet:(id)arg1 ;
-(void)enumerateIdentifiersWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqualToElementIdentifierSet:(id)arg1 ;
@end

