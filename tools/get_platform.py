import platform


class Platform:

    def __init__(self, *, system: str, machine: str, exe: str):
        self.system = system
        '''Name of operating system: "windows", "macos" or "linux"'''

        self.machine = machine
        '''Name of machine architecture: "x86_64" or "arm64"'''

        self.exe = exe
        """Executable file extension: ".exe" for Windows, "" otherwise"""


def get_platform() -> Platform | None:
    exe = ""
    system = platform.system()

    if system == "Windows":
        system = "windows"
        exe = ".exe"
    elif system == "Linux":
        system = "linux"
    elif system == "Darwin":
        system = "macos"
    else:
        print(f"Unknown system '{system}'")
        return None

    match platform.machine().lower():
        case "amd64" | "x86_64":
            machine = "x86_64"
        case "arm64":
            machine = "arm64"
        case machine:
            print(f"Unknown machine: {machine}")
            return None

    supported_platforms = [
        "windows-x86_64",
        "linux-x86_64",
        "macos-x86_64",
        "macos-arm64"
    ]

    combined = f"{system}-{machine}"
    if combined not in supported_platforms:
        print(f"Unsupported platform: {combined}")
        return None

    return Platform(system=system, machine=machine, exe=exe)
