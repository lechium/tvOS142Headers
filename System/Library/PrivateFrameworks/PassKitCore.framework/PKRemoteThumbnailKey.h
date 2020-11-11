/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface PKRemoteThumbnailKey : NSObject <NSCopying> {

	NSString* _requestIdentifier;
	NSDictionary* _requestDictionary;

}

@property (nonatomic,retain) NSString * requestIdentifier;                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * requestDictionary;              //@synthesize requestDictionary=_requestDictionary - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)requestIdentifier;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSDictionary *)requestDictionary;
-(BOOL)isEqualToRemoteThumbnailKey:(id)arg1 ;
-(void)setRequestDictionary:(NSDictionary *)arg1 ;
@end

