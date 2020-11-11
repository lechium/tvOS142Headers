/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TUHandle, NSString;

@interface TUMetadataDestinationID : NSObject <NSSecureCoding, NSCopying> {

	TUHandle* _handle;

}

@property (nonatomic,readonly) TUHandle * handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * isoCountryCode; 
+(BOOL)supportsSecureCoding;
+(id)metadataDestinationIDsForCHRecentCalls:(id)arg1 ;
+(id)metadataDestinationIDsForCHRecentCall:(id)arg1 ;
+(id)metadataDestinationIDForCall:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(TUHandle *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithHandle:(id)arg1 ;
-(NSString *)isoCountryCode;
-(BOOL)isEqualToMetadataDestinationID:(id)arg1 ;
-(id)initWithDestinationID:(id)arg1 isoCountryCode:(id)arg2 ;
@end
