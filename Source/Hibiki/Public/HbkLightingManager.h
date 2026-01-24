#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Interface_TngSingleton.h"
#include "HbkLightingManager.generated.h"

class UHbkLightingManagerInstance;
class UWorld;

UCLASS(Blueprintable, Transient)
class HIBIKI_API UHbkLightingManager : public UObject, public IInterface_TngSingleton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UWorld*, UHbkLightingManagerInstance*> HbkLightingManagers;
    
public:
    UHbkLightingManager();


    // Fix for true pure virtual functions not being implemented
};

