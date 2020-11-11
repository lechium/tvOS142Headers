/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCTicketManagerProtocol <NSObject>
@required
-(BOOL)installCertificateWithString:(id)arg1 version:(id)arg2 forRealm:(id)arg3;
-(void)uninstallPublicKeyForRealm:(id)arg1;
-(id)envelopeWithContext:(id)arg1;
-(id)authContextWithRequest:(id)arg1;
-(id)authContextWithRequest:(id)arg1 keyCode:(id)arg2 authenticationType:(id)arg3;
-(id)authContextWithRequest:(id)arg1 sessionToken:(id)arg2;
-(id)decryptEncryptedContent:(id)arg1 withHmac:(id)arg2 context:(id)arg3;
-(id)createSSOTokenWithContent:(id)arg1 context:(id)arg2;
-(BOOL)storeSSOToken:(id)arg1;
-(id)fetchSSOTokenForPrincipal:(id)arg1;
-(id)fetchSSOTokenForPrincipal:(id)arg1 agedLessThan:(double)arg2;
-(id)changePasswordContextWithRequest:(id)arg1 oldPassword:(id)arg2 newPassword:(id)arg3;
-(id)serviceTicketStringWithRequest:(id)arg1 ssoToken:(id)arg2;
-(void)updateContextWithClientSecretIfAny:(id)arg1;

@end

