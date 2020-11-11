/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray;

@interface PSIObject : NSObject <NSCopying> {

	NSMutableDictionary* _synonymsByOriginalWord;
	NSString* _uuid;
	NSArray* _tokens;

}

@property (setter=setUUID:,nonatomic,copy) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                         //@synthesize tokens=_tokens - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)clear;
-(NSString *)uuid;
-(id)initWithUUID:(id)arg1 ;
-(void)setUUID:(id)arg1 ;
-(NSArray *)tokens;
-(void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3 ;
-(void)addContentString:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4 ;
-(void)addSynonym:(id)arg1 identifier:(id)arg2 category:(short)arg3 originalContentString:(id)arg4 ;
-(void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)addIdentifier:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)reverse;
-(id)initForReverse;
-(id)_initForCopy:(BOOL)arg1 ;
-(void)enumerateSynonymsForOriginalContentString:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

