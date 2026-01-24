#pragma once
#include "CoreMinimal.h"
#include "HbkGameModeBase.h"
#include "Templates/SubclassOf.h"
#include "HibikiVS_StreamingGameMode.generated.h"

class AHUD;
class APawn;
class APlayerController;

UCLASS(Blueprintable, NonTransient)
class AHibikiVS_StreamingGameMode : public AHbkGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> ViewerPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerController> ViewerControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHUD> ViewerHudClass;
    
    AHibikiVS_StreamingGameMode(const FObjectInitializer& ObjectInitializer);

};

