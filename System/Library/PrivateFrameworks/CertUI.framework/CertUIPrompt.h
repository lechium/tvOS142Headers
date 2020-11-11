/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CertUI/CertUI-Structs.h>
@class NSString;

@interface CertUIPrompt : NSObject {

	SecTrustRef _trust;
	NSString* _host;
	NSString* _service;
	NSString* _connectionDisplayName;
	/*^block*/id _responseBlock;

}

@property (nonatomic,retain) NSString * host;                             //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * service;                          //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * connectionDisplayName;              //@synthesize connectionDisplayName=_connectionDisplayName - In the implementation block
+(id)stringForResponse:(int)arg1 ;
+(id)promptQueue;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(SecTrustRef)trust;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(void)setTrust:(SecTrustRef)arg1 ;
-(void)showPromptWithResponseBlock:(/*^block*/id)arg1 ;
-(NSString *)connectionDisplayName;
-(void)setConnectionDisplayName:(NSString *)arg1 ;
-(id)_sendablePropertiesFromProperties:(id)arg1 ;
-(id)_sendablePropertyFromProperty:(id)arg1 ;
-(id)_copyPropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_propertyNamed:(id)arg1 ofType:(id)arg2 inProperties:(id)arg3 ;
-(id)_sendablePropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_titleFromTrust:(SecTrustRef)arg1 ;
-(id)_issuerFromTrust:(SecTrustRef)arg1 ;
-(id)_subtitleFromTrust:(SecTrustRef)arg1 ;
-(id)_purposeFromTrustProperties:(id)arg1 ;
-(id)_expirationFromTrust:(SecTrustRef)arg1 ;
-(BOOL)_isRootCertificateFromTrust:(SecTrustRef)arg1 ;
-(id)_digestFromTrust:(SecTrustRef)arg1 ;
-(int)_sendRemoteMessageWithPromptOptions:(id)arg1 ;
-(id)_newUserInfoWithHostname:(id)arg1 trust:(SecTrustRef)arg2 options:(id)arg3 ;
-(id)_messagingCenter;
-(int)_responseFromReplyDict:(id)arg1 ;
-(void)showPromptWithOptions:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(int)_sendRemoteMessage;
-(void)_informConsumerOfResponse:(int)arg1 ;
-(int)showAndWaitForResponse;
@end

