/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSString, NSData;

@interface SFCertificate_Ivars : NSObject {

	long long certificateType;
	NSString* subject;
	NSString* issuerName;
	NSData* serialNumber;
	SecCertificateRef secCertificate;

}
@end

