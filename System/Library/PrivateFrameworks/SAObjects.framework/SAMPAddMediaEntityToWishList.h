/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPAddMediaEntityToWishList : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * adamId; 
+(id)addMediaEntityToWishList;
+(id)addMediaEntityToWishListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

