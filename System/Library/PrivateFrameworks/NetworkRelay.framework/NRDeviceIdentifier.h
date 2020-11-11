/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface NRDeviceIdentifier : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _nrDeviceIdentifier;

}

@property (nonatomic,copy) NSUUID * nrDeviceIdentifier;              //@synthesize nrDeviceIdentifier=_nrDeviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newDeviceIdentifierWithBluetoothUUID:(id)arg1 ;
+(id)copyBestTestingDeviceIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(NSUUID *)nrDeviceIdentifier;
-(void)setNrDeviceIdentifier:(NSUUID *)arg1 ;
@end

