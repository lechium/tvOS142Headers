/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSString;


@protocol HMDSettingBaseProtocol <NSObject,NSSecureCoding>
@property (copy,readonly) NSUUID * parentIdentifier; 
@property (copy,readonly) NSUUID * identifier; 
@property (copy,readonly) NSString * name; 
@required
-(NSString *)name;
-(NSUUID *)identifier;
-(NSUUID *)parentIdentifier;

@end

