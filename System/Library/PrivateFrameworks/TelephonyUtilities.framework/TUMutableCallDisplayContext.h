/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUCallDisplayContext.h>

@class NSString, NSPersonNameComponents;

@interface TUMutableCallDisplayContext : TUCallDisplayContext

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSPersonNameComponents * personNameComponents; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * suggestedName; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * companyName; 
@property (nonatomic,copy) NSString * mapName; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * contactName; 
@property (nonatomic,copy) NSString * contactLabel; 
@property (nonatomic,copy) NSString * callDirectoryLabel; 
@property (nonatomic,copy) NSString * callDirectoryLocalizedExtensionContainingAppName; 
@property (nonatomic,copy) NSString * callDirectoryExtensionIdentifier; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (assign,nonatomic) int legacyAddressBookIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeValuesFromDisplayContext:(id)arg1 ;
@end

