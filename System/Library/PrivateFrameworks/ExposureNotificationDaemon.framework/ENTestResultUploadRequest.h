/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExposureNotificationDaemon/ENTestResultNetworkRequest.h>

@class NSString, NSData, NSArray, NSNumber;

@interface ENTestResultUploadRequest : ENTestResultNetworkRequest {

	NSString* _certificate;
	NSString* _healthAuthorityID;
	NSString* _requestRevisionToken;
	NSData* _symmetricKey;
	NSArray* _temporaryExposureKeys;
	NSNumber* _symptomOnsetInterval;
	BOOL _userDidTravel;
	NSString* _requestPadding;
	NSString* _responseRevisionToken;
	NSNumber* _insertedExposures;

}

@property (nonatomic,copy,readonly) NSString * requestPadding;                     //@synthesize requestPadding=_requestPadding - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseRevisionToken;              //@synthesize responseRevisionToken=_responseRevisionToken - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * insertedExposures;                  //@synthesize insertedExposures=_insertedExposures - In the implementation block
+(id)uploadRequestWithCertificate:(id)arg1 healthAuthorityID:(id)arg2 revisionToken:(id)arg3 symmetricKey:(id)arg4 temporaryExposureKeys:(id)arg5 userMetadata:(id)arg6 requestURL:(id)arg7 URLSession:(id)arg8 queue:(id)arg9 error:(id*)arg10 ;
-(id)bodyJSON;
-(id)handleResponse:(id)arg1 body:(id)arg2 ;
-(NSString *)requestPadding;
-(NSString *)responseRevisionToken;
-(NSNumber *)insertedExposures;
@end

