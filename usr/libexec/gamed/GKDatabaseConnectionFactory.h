//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKDatabaseConnectionFactory : NSObject
{
    NSString *_databasePath;	// 8 = 0x8
}

+ (id)factoryWithDatabaseName:(id)arg1 environment:(long long)arg2;	// IMP=0x0000000100138c90
+ (id)pathForDatabaseName:(id)arg1 environment:(long long)arg2;	// IMP=0x0000000100138c28
+ (id)directoryForEnvironment:(long long)arg1;	// IMP=0x0000000100138b78
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (id)connectionForWriterWithName:(id)arg1;	// IMP=0x0000000100138dd0
- (id)connectionForReaderWithName:(id)arg1;	// IMP=0x0000000100138dc8
- (void)dealloc;	// IMP=0x0000000100138d80
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100138d20

@end

