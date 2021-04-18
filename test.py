import re
# <p>Name of thr Problem</p>&nbsp; <button onclick="window.open('.....url..')">Solve</button>
handle = open("notes", "r")
handle1 = open("links", "w")
for i in handle:
    if(i[0] == "|"):
        continue
    arr = i.split("|")
    # arr[0] = i.strip()
    # arr[1] = i.strip()
    # arr[2] = i.strip()
    print(arr)
    handle1.write(f"""<p>{arr[1]}</p>&nbsp; <button onclick=\"window.open('{arr[2]}')\">Solve</button>""")
handle.close()
handle1.close()