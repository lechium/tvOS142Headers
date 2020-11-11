/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TUVideoCallAttributes : NSObject <NSSecureCoding> {

	long long _remoteCameraOrientation;
	long long _localVideoContextSlotIdentifier;
	long long _remoteVideoContextSlotIdentifier;

}

@property (assign,nonatomic) long long remoteCameraOrientation;                       //@synthesize remoteCameraOrientation=_remoteCameraOrientation - In the implementation block
@property (assign,nonatomic) long long localVideoContextSlotIdentifier;               //@synthesize localVideoContextSlotIdentifier=_localVideoContextSlotIdentifier - In the implementation block
@property (assign,nonatomic) long long remoteVideoContextSlotIdentifier;              //@synthesize remoteVideoContextSlotIdentifier=_remoteVideoContextSlotIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)remoteCameraOrientation;
-(long long)localVideoContextSlotIdentifier;
-(long long)remoteVideoContextSlotIdentifier;
-(BOOL)isEqualToVideoCallAttributes:(id)arg1 ;
-(void)setRemoteCameraOrientation:(long long)arg1 ;
-(void)setLocalVideoContextSlotIdentifier:(long long)arg1 ;
-(void)setRemoteVideoContextSlotIdentifier:(long long)arg1 ;
@end

