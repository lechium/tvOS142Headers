/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PLClientAuthorization <NSObject>
@property (nonatomic,readonly) NSString * trustedCallerBundleID; 
@property (nonatomic,readonly) NSString * fetchFilterIdentifier; 
@property (nonatomic,readonly) NSString * trustedCallerDisplayName; 
@property (nonatomic,readonly) NSString * trustedCallerPhotoLibraryUsageDescription; 
@property (nonatomic,readonly) int clientProcessIdentifier; 
@property (nonatomic,readonly) BOOL photoKitEntitled; 
@property (nonatomic,readonly) SCD_Struct_PL32 clientAuditToken; 
@property (nonatomic,readonly) BOOL directDatabaseAccessAuthorized; 
@property (nonatomic,readonly) BOOL directDatabaseWriteAuthorized; 
@property (nonatomic,readonly) BOOL cloudInternalEntitled; 
@property (nonatomic,readonly) BOOL analyticsCacheReadEntitled; 
@property (nonatomic,readonly) BOOL analyticsCacheWriteEntitled; 
@property (nonatomic,readonly) BOOL limitedLibraryMode; 
@property (getter=isClientLimitedLibraryCapable,nonatomic,readonly) BOOL clientLimitedLibraryCapable; 
@required
-(int)clientProcessIdentifier;
-(BOOL)analyticsCacheReadEntitled;
-(BOOL)analyticsCacheWriteEntitled;
-(BOOL)directDatabaseWriteAuthorized;
-(BOOL)cloudInternalEntitled;
-(NSString *)trustedCallerBundleID;
-(BOOL)limitedLibraryMode;
-(BOOL)directDatabaseAccessAuthorized;
-(SCD_Struct_PL32)clientAuditToken;
-(NSString *)fetchFilterIdentifier;
-(BOOL)photoKitEntitled;
-(BOOL)photoKitEntitledFor:(id)arg1;
-(NSString *)trustedCallerDisplayName;
-(NSString *)trustedCallerPhotoLibraryUsageDescription;
-(BOOL)isClientLimitedLibraryCapable;

@end

