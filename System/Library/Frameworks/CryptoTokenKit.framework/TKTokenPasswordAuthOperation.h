/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CryptoTokenKit/TKTokenAuthOperation.h>

@class NSString;

@interface TKTokenPasswordAuthOperation : TKTokenAuthOperation {

	NSString* _password;
	NSString* _localizedPasswordLabel;

}

@property (copy) NSString * localizedPasswordLabel;              //@synthesize localizedPasswordLabel=_localizedPasswordLabel - In the implementation block
@property (copy) NSString * password;                            //@synthesize password=_password - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)importOperation:(id)arg1 ;
-(Class)baseClassForUI;
-(NSString *)localizedPasswordLabel;
-(void)setLocalizedPasswordLabel:(NSString *)arg1 ;
@end

