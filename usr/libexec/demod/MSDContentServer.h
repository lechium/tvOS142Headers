//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDContentServerLocatorDelegate-Protocol.h"
#import "MSDDemoUpdateStatusDelegate-Protocol.h"

@class MSDContentServerConnection, NSString;
@protocol MSDContentServerConnectionFreeSpaceDelegate;

@interface MSDContentServer : NSObject <MSDDemoUpdateStatusDelegate, MSDContentServerLocatorDelegate>
{
    _Bool _isLocal;	// 8 = 0x8
    _Bool _localHubReachable;	// 9 = 0x9
    _Bool _connectable;	// 10 = 0xa
    NSString *_server;	// 16 = 0x10
    NSString *_port;	// 24 = 0x18
    NSString *_bonjourName;	// 32 = 0x20
    id <MSDContentServerConnectionFreeSpaceDelegate> _freeSpaceDelegate;	// 40 = 0x28
    MSDContentServerConnection *_demoUpdateConnection;	// 48 = 0x30
    MSDContentServerConnection *_infoReportConnection;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x000000010004b4e4
- (void).cxx_destruct;	// IMP=0x000000010005159c
@property _Bool connectable; // @synthesize connectable=_connectable;
@property(retain) MSDContentServerConnection *infoReportConnection; // @synthesize infoReportConnection=_infoReportConnection;
@property(retain) MSDContentServerConnection *demoUpdateConnection; // @synthesize demoUpdateConnection=_demoUpdateConnection;
@property _Bool localHubReachable; // @synthesize localHubReachable=_localHubReachable;
@property(retain) id <MSDContentServerConnectionFreeSpaceDelegate> freeSpaceDelegate; // @synthesize freeSpaceDelegate=_freeSpaceDelegate;
@property _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(retain) NSString *bonjourName; // @synthesize bonjourName=_bonjourName;
@property(retain) NSString *port; // @synthesize port=_port;
@property(retain) NSString *server; // @synthesize server=_server;
- (void)contentServerDidDisappear;	// IMP=0x00000001000514e4
- (void)contentServerDidAppear:(id)arg1 port:(id)arg2;	// IMP=0x0000000100051374
- (_Bool)freeUpSpaceFor:(long long)arg1;	// IMP=0x000000010005113c
- (id)prepareToWrite:(id)arg1;	// IMP=0x0000000100050d84
- (void)demoUpdateCompleted:(id)arg1;	// IMP=0x0000000100050a90
- (void)demoUpdateProgress:(long long)arg1;	// IMP=0x0000000100050a8c
- (void)demoUpdateFailed:(id)arg1;	// IMP=0x0000000100050680
- (_Bool)getManifestInfo:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010004fe98
- (void)unenrollWithObliterateFlag:(_Bool)arg1;	// IMP=0x000000010004fba8
- (id)getAccountSettings:(id *)arg1;	// IMP=0x000000010004f600
- (_Bool)downloadIPAPreCachingHub:(id)arg1 fullIPAHash:(id)arg2 UID:(id)arg3 currentUID:(id)arg4 to:(id)arg5 error:(id *)arg6;	// IMP=0x000000010004f0b4
- (_Bool)downloadIPACachingHub:(id)arg1 fullIPAHash:(id)arg2 UID:(id)arg3 currentUID:(id)arg4 to:(id)arg5 error:(id *)arg6;	// IMP=0x000000010004e8c0
- (_Bool)downloadIPA:(id)arg1 fullIPAHash:(id)arg2 UID:(id)arg3 currentUID:(id)arg4 to:(id)arg5 error:(id *)arg6;	// IMP=0x000000010004e760
- (_Bool)downloadContentFile:(id)arg1 ofHash:(id)arg2 to:(id)arg3 error:(id *)arg4;	// IMP=0x000000010004d894
- (_Bool)getFileDownloadCredential:(id *)arg1;	// IMP=0x000000010004d558
- (_Bool)downloadFileBasedOnInfo:(id)arg1;	// IMP=0x000000010004d2d4
- (id)downloadManifestAndSaveTo:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004ce4c
- (id)prepareURLComponentsWithManifestInfo;	// IMP=0x000000010004cbcc
- (_Bool)isEnrolled;	// IMP=0x000000010004c7d0
- (_Bool)enroll:(id)arg1 pairingCredential:(id)arg2 error:(id *)arg3;	// IMP=0x000000010004bd28
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010004bc58
- (void)configServerBonjourName:(id)arg1 isLocal:(_Bool)arg2;	// IMP=0x000000010004bc1c
- (void)closeConnection;	// IMP=0x000000010004ba74
- (void)initConnection:(id)arg1 port:(id)arg2 connectableGuess:(_Bool)arg3;	// IMP=0x000000010004b5ac
- (id)init;	// IMP=0x000000010004b550

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
