/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol TRINamespaceUpdateProtocol <NSObject>
@property (nonatomic,readonly) unsigned namespaceId; 
@property (nonatomic,readonly) NSString * namespaceName; 
@property (nonatomic,readonly) id<TRINotificationToken> token; 
@required
-(id<TRINotificationToken>)token;
-(NSString *)namespaceName;
-(unsigned)namespaceId;

@end
