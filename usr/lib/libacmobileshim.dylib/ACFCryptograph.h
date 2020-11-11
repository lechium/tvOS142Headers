/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACFCryptographProtocol.h>

@class NSString;

@interface ACFCryptograph : NSObject <ACFCryptographProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sha1Context;
-(id)randomDataOfLength:(unsigned long long)arg1 ;
-(id)encryptData:(id)arg1 withKey:(SecKeyRef)arg2 ;
-(id)signatureForData:(id)arg1 withKey:(SecKeyRef)arg2 ;
-(id)decodeBase64:(id)arg1 ;
-(id)encodeBase64:(id)arg1 ;
-(id)decodeBase16:(id)arg1 ;
-(id)encodeBase16:(id)arg1 ;
-(id)decodeStringWithObscuredData:(id)arg1 ;
-(id)encodeObscuredDataWithString:(id)arg1 length:(unsigned long long)arg2 ;
-(id)hashDataSHA256WithData:(id)arg1 ;
-(id)hashStringSHA256WithString:(id)arg1 ;
-(id)hashDataSHA1WithString:(id)arg1 ;
-(id)hashStringSHA1WithString:(id)arg1 ;
-(void)sha1Context:(id)arg1 updateWithData:(id)arg2 ;
-(id)sha1ContextFinalize:(id)arg1 ;
-(id)randomStringOfLength:(unsigned long long)arg1 ;
-(id)encryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(BOOL)arg4 ;
-(id)decryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(BOOL)arg4 ;
-(id)encrypt3DESCBCData:(id)arg1 withKey:(id)arg2 pading:(BOOL)arg3 ;
-(id)decrypt3DESCBCData:(id)arg1 withKey:(id)arg2 ;
-(id)hmac256DataWithData:(id)arg1 key:(id)arg2 ;
-(void)fillEncryptionSuffix:(id)arg1 ;
-(void)fillHMACSuffix:(id)arg1 ;
-(void)clearKey:(id)arg1 ;
-(id)compactDataFromPropertyList:(id)arg1 ;
-(id)compressData:(id)arg1 ;
-(void)setLength:(unsigned long long)arg1 toData:(id)arg2 ;
@end

