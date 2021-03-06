//
//  UKCrashReporter.h
//  NiftyFeatures
//
//  Created by Uli Kusterer on Sat Feb 04 2006.
//  Copyright (c) 2006 M. Uli Kusterer. All rights reserved.
//
//  Modified 2007-09-17 by martin@bzero.se for use in ShakesPeer.

// -----------------------------------------------------------------------------
//	Headers:
// -----------------------------------------------------------------------------

#import <Foundation/Foundation.h>


// -----------------------------------------------------------------------------
//	Prototypes:
// -----------------------------------------------------------------------------

/* Call this sometime during startup (e.g. in applicationDidLaunch) and it'll
	check for a new crash log and offer to the user to send it.
	
	The crash log is sent to a CGI script whose URL you specify in the
	UKUpdateChecker.strings file. If you want, you can even have different
	URLs for different locales that way, in case a crash is caused by an error
	in a localized file.
*/
void	UKCrashReporterCheckForCrash(NSString *appName);
