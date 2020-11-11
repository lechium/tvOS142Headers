/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSObject, MCPeerID, NSString, NSMutableData, NSURL, NSProgress, MCResourceDownloader, MCResourceProgressObserver;

@interface MCSessionStream : NSObject {

	NSObject*<OS_dispatch_source> _source;
	BOOL _sourceSuspended;
	BOOL _progressUnbounded;
	unsigned _streamID;
	int state;
	int _fd;
	MCPeerID* _peerID;
	NSString* _name;
	NSMutableData* _incomingBuffer;
	NSURL* _url;
	NSProgress* _progress;
	/*^block*/id _completionHandler;
	MCResourceDownloader* _urlDownloader;
	MCResourceProgressObserver* _observer;

}

@property (assign,nonatomic) MCPeerID * peerID;                                  //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned streamID;                                  //@synthesize streamID=_streamID - In the implementation block
@property (assign,nonatomic) int state; 
@property (assign,nonatomic) int fd;                                             //@synthesize fd=_fd - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_source> source;               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL sourceSuspended;                               //@synthesize sourceSuspended=_sourceSuspended - In the implementation block
@property (nonatomic,retain) NSMutableData * incomingBuffer;                     //@synthesize incomingBuffer=_incomingBuffer - In the implementation block
@property (nonatomic,copy) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) MCResourceProgressObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL progressUnbounded;                             //@synthesize progressUnbounded=_progressUnbounded - In the implementation block
@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) MCResourceDownloader * urlDownloader;               //@synthesize urlDownloader=_urlDownloader - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSURL *)url;
-(NSProgress *)progress;
-(void)setObserver:(MCResourceProgressObserver *)arg1 ;
-(int)fd;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setProgress:(NSProgress *)arg1 ;
-(MCResourceProgressObserver *)observer;
-(MCPeerID *)peerID;
-(void)setPeerID:(MCPeerID *)arg1 ;
-(unsigned)streamID;
-(void)setStreamID:(unsigned)arg1 ;
-(void)setFd:(int)arg1 ;
-(BOOL)sourceSuspended;
-(void)setSourceSuspended:(BOOL)arg1 ;
-(NSMutableData *)incomingBuffer;
-(void)setIncomingBuffer:(NSMutableData *)arg1 ;
-(BOOL)progressUnbounded;
-(void)setProgressUnbounded:(BOOL)arg1 ;
-(MCResourceDownloader *)urlDownloader;
-(void)setUrlDownloader:(MCResourceDownloader *)arg1 ;
@end

