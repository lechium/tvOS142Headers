/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSXPCListenerEndpoint;


@protocol Service <NSObject>
@property (nonatomic,readonly) NSString * serviceID; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@required
-(NSXPCListenerEndpoint *)endpoint;
-(NSString *)serviceID;

@end

