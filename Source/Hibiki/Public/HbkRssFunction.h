#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "EHbkNote.h"
#include "HbkRssFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkRssFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkRssFunction();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void DelayUntilRhythmSynchro(UObject* WorldContextObject, EHbkNote NoteType, int32 NoteCounts, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void DelayUntilExitMusic(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void DelayUntilEntryMusic(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
};

