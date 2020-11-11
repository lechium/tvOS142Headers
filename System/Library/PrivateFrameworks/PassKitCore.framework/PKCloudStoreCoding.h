/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKCloudStoreCoding <NSSecureCoding>
@optional
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;

@required
+(id)recordNamePrefix;
-(unsigned long long)itemType;
-(id)primaryIdentifier;
-(void)encodeWithCloudStoreCoder:(id)arg1;
-(id)initWithCloudStoreCoder:(id)arg1;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1;

@end

